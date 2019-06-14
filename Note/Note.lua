function Initialize()
	if SKIN:GetVariable('Note') == '' then
        SKIN:Bang('[!SetOption Note StringStyle Italic][!SetOption Note FontColor 808080A0][!SetOption Note Text "Write something... \r\n \r\nUse Middle Mouse-Wheel click to copy to clipboard. \r\nUse Ctrl+Enter to insert line break. \r\nPress Enter after writing your note to save it."]')
    end
end

function EditItemA()
	SKIN:Bang('[!SetVariable NoteOrig "'..SKIN:GetVariable('Note'):gsub('\n', '\r\n')..'"][!CommandMeasure mInput "ExecuteBatch 1"]')
end

function EditItemB()
	local input = SKIN:GetVariable('Input'):gsub('"', "'"):gsub('\r\n', '#*CRLF*#')
	SKIN:Bang('[!WriteKeyValue Variables Note "'..input..'" "#CURRENTPATH#Note.txt"][!Refresh]')
end

function ClipItem()
	SKIN:Bang('!SetClip "'..SKIN:GetVariable('Note'):gsub('\n', '\r\n')..'"')
end
