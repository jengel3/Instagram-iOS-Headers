

@class NSFileManager;

@interface IGDirectoryFinder : NSObject {

	NSFileManager* _fileManager;

}

@property (nonatomic,readonly) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
-(id)cachesDirectoryURL;
-(id)initWithFileManager:(id)arg1 ;
-(id)URLforUserDomainDirectory:(unsigned)arg1 ;
-(id)temporaryDirectoryURL;
-(id)init;
-(NSFileManager *)fileManager;
-(id)documentsDirectoryURL;
@end

