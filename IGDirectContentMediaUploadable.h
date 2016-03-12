
@class NSURL, NSData, IGUploadModel;


@protocol IGDirectContentMediaUploadable <IGDirectContentUploadable>
@property (nonatomic,readonly) NSURL * cacheKeyURL; 
@property (nonatomic,retain) NSData * imageData; 
@property (nonatomic,readonly) char useMainCameraUploadFlow; 
@property (nonatomic,retain) IGUploadModel * uploadModel; 
@property (assign,nonatomic) CGSize aspectRatio; 
@required
-(NSURL *)cacheKeyURL;
-(char)useMainCameraUploadFlow;
-(IGUploadModel *)uploadModel;
-(void)setUploadModel:(id)arg1;
-(NSData *)imageData;
-(CGSize)aspectRatio;
-(void)setImageData:(id)arg1;
-(void)setAspectRatio:(CGSize)arg1;

@end

