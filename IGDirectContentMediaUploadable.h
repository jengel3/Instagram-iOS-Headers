
@class NSURL, NSData, IGUploadModel;


@protocol IGDirectContentMediaUploadable <IGDirectContentUploadable>
@property (nonatomic,readonly) NSURL * cacheKeyURL; 
@property (nonatomic,retain) NSData * imageData; 
@property (nonatomic,readonly) char useMainCameraUploadFlow; 
@property (nonatomic,retain) IGUploadModel * uploadModel; 
@required
-(NSURL *)cacheKeyURL;
-(char)useMainCameraUploadFlow;
-(IGUploadModel *)uploadModel;
-(void)setUploadModel:(id)arg1;
-(NSData *)imageData;
-(void)setImageData:(id)arg1;

@end

