

@class NSString, IGDirectoryFinder;

@interface IGFileFinder : NSObject {

	NSString* _fileName;
	IGDirectoryFinder* _directoryFinder;

}

@property (nonatomic,readonly) NSString * fileName;                              //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,readonly) IGDirectoryFinder * directoryFinder;              //@synthesize directoryFinder=_directoryFinder - In the implementation block
-(id)initWithFileName:(id)arg1 ;
-(id)cachesFileURL;
-(id)initWithFileName:(id)arg1 directoryFinder:(id)arg2 ;
-(IGDirectoryFinder *)directoryFinder;
-(id)fileURLInDirectory:(id)arg1 ;
-(id)documentsFileURL;
-(id)temporaryFileURL;
-(NSString *)fileName;
@end

