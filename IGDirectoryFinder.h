

@class NSFileManager;

@interface IGDirectoryFinder : NSObject {

	NSFileManager* _fileManager;

}

@property (nonatomic,readonly) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
-(id)initWithFileManager:(id)arg1 ;
-(id)URLforUserDomainDirectory:(unsigned)arg1 ;
-(id)temporaryDirectoryURL;
-(id)cachesDirectoryURL;
-(id)trashDirectoryURL;
-(id)init;
-(NSFileManager *)fileManager;
-(id)documentsDirectoryURL;
@end

