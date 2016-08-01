

@protocol FBSDKVideoUploaderDelegate;
@class NSNumber, NSNumberFormatter, NSString, FBSDKShareVideo, NSDictionary;

@interface FBSDKVideoUploader : NSObject {

	NSNumber* _videoID;
	NSNumber* _uploadSessionID;
	NSNumberFormatter* _numberFormatter;
	NSString* _graphPath;
	NSString* _videoName;
	unsigned _videoSize;
	FBSDKShareVideo* _video;
	NSDictionary* _parameters;
	NSString* _graphNode;
	id<FBSDKVideoUploaderDelegate> _delegate;

}

@property (nonatomic,copy,readonly) FBSDKShareVideo * video;                              //@synthesize video=_video - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                                     //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) NSString * graphNode;                                          //@synthesize graphNode=_graphNode - In the implementation block
@property (assign,nonatomic,__weak) id<FBSDKVideoUploaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_graphPathWithSuffix:(id)arg1 ;
-(void)_postStartRequest;
-(id)_extractOffsetsFromResultDictionary:(id)arg1 ;
-(void)_startTransferRequestWithOffsetDictionary:(id)arg1 ;
-(void)_postFinishRequest;
-(NSString *)graphNode;
-(id)initWithVideoName:(id)arg1 videoSize:(unsigned)arg2 parameters:(id)arg3 delegate:(id)arg4 ;
-(void)setGraphNode:(NSString *)arg1 ;
-(id)numberFormatter;
-(void)setDelegate:(id<FBSDKVideoUploaderDelegate>)arg1 ;
-(id)init;
-(id<FBSDKVideoUploaderDelegate>)delegate;
-(void)start;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(FBSDKShareVideo *)video;
@end

