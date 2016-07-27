

@class NSString;

@interface IGDraftBeingStored : NSObject {

	char _hasFinishedArchiving;
	int _numClipEncodesRemaining;
	NSString* _filePath;
	/*^block*/id _completion;

}

@property (assign,nonatomic) char hasFinishedArchiving;                //@synthesize hasFinishedArchiving=_hasFinishedArchiving - In the implementation block
@property (assign,nonatomic) int numClipEncodesRemaining;              //@synthesize numClipEncodesRemaining=_numClipEncodesRemaining - In the implementation block
@property (nonatomic,retain) NSString * filePath;                      //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,copy) id completion;                              //@synthesize completion=_completion - In the implementation block
-(char)hasFinishedArchiving;
-(void)setHasFinishedArchiving:(char)arg1 ;
-(int)numClipEncodesRemaining;
-(void)setNumClipEncodesRemaining:(int)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
@end

