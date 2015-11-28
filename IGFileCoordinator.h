

@class NSFileManager, NSURL;

@interface IGFileCoordinator : NSObject {

	NSFileManager* _fileManager;
	NSURL* _filePathURL;

}

@property (nonatomic,readonly) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) NSURL * filePathURL;                      //@synthesize filePathURL=_filePathURL - In the implementation block
-(id)initWithFilePathURL:(id)arg1 ;
-(id)unarchiveObject;
-(char)archiveObject:(id)arg1 ;
-(char)removeFile;
-(id)initWithFileManager:(id)arg1 filePathURL:(id)arg2 ;
-(NSURL *)filePathURL;
-(NSFileManager *)fileManager;
@end

