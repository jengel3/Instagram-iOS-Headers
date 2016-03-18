

@class NSString;

@interface IGAnalyticsLogFileManager : NSObject {

	NSString* _logFileDirectory;

}

@property (nonatomic,readonly) NSString * logFileDirectory;              //@synthesize logFileDirectory=_logFileDirectory - In the implementation block
-(void)setLogFileDirectory:(NSString *)arg1 ;
-(void)deleteLogFile:(id)arg1 ;
-(id)initWithLogFileDirectory:(id)arg1 ;
-(id)allLogFiles;
-(id)createLogFileWithData:(id)arg1 binary:(char)arg2 ;
-(void)deleteLogFiles:(id)arg1 keepNewestFiles:(unsigned)arg2 ;
-(char)isBinaryFile:(id)arg1 ;
-(NSString *)logFileDirectory;
@end

