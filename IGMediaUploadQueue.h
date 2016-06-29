

@class NSMutableSet, NSMutableArray;

@interface IGMediaUploadQueue : NSObject {

	NSMutableSet* _activeUploadsSet;
	NSMutableSet* _allUploadsSet;
	NSMutableArray* _failedUploadsQueue;
	NSMutableArray* _stagedUploadsQueue;

}

@property (nonatomic,retain) NSMutableSet * activeUploadsSet;                  //@synthesize activeUploadsSet=_activeUploadsSet - In the implementation block
@property (nonatomic,retain) NSMutableSet * allUploadsSet;                     //@synthesize allUploadsSet=_allUploadsSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * failedUploadsQueue;              //@synthesize failedUploadsQueue=_failedUploadsQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * stagedUploadsQueue;              //@synthesize stagedUploadsQueue=_stagedUploadsQueue - In the implementation block
-(void)enqueueUpload:(id)arg1 ;
-(char)containsUpload:(id)arg1 ;
-(id)nextUpload;
-(void)uploadSuccess:(id)arg1 ;
-(void)uploadFailure:(id)arg1 ;
-(void)evaluateUploads;
-(void)evaluateFailedUpload:(id)arg1 ;
-(char)shouldRetryUpload:(id)arg1 ;
-(NSMutableSet *)activeUploadsSet;
-(void)setActiveUploadsSet:(NSMutableSet *)arg1 ;
-(NSMutableSet *)allUploadsSet;
-(void)setAllUploadsSet:(NSMutableSet *)arg1 ;
-(NSMutableArray *)failedUploadsQueue;
-(void)setFailedUploadsQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stagedUploadsQueue;
-(void)setStagedUploadsQueue:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

