
#import <Instagram/DDLogFileManager.h>

@class NSString;

@interface DDLogFileManagerDefault : NSObject <DDLogFileManager> {

	unsigned maximumNumberOfLogFiles;
	NSString* _logsDirectory;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned maximumNumberOfLogFiles; 
-(id)initWithLogsDirectory:(id)arg1 ;
-(id)defaultLogsDirectory;
-(id)sortedLogFileInfos;
-(unsigned)maximumNumberOfLogFiles;
-(id)logsDirectory;
-(char)isLogFile:(id)arg1 ;
-(id)unsortedLogFilePaths;
-(id)unsortedLogFileInfos;
-(id)generateShortUUID;
-(id)unsortedLogFileNames;
-(id)sortedLogFilePaths;
-(id)sortedLogFileNames;
-(id)createNewLogFile;
-(void)setMaximumNumberOfLogFiles:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)deleteOldLogFiles;
@end

