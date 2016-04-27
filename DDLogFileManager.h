

@protocol DDLogFileManager <NSObject>
@property (assign) unsigned maximumNumberOfLogFiles; 
@optional
-(void)didArchiveLogFile:(id)arg1;
-(void)didRollAndArchiveLogFile:(id)arg1;

@required
-(id)sortedLogFileInfos;
-(unsigned)maximumNumberOfLogFiles;
-(id)logsDirectory;
-(id)unsortedLogFilePaths;
-(id)unsortedLogFileInfos;
-(id)unsortedLogFileNames;
-(id)sortedLogFilePaths;
-(id)sortedLogFileNames;
-(id)createNewLogFile;
-(void)setMaximumNumberOfLogFiles:(unsigned)arg1;

@end

