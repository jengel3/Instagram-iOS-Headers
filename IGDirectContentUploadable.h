
@class IGDirectContentUploadInfo;


@protocol IGDirectContentUploadable <NSObject>
@property (nonatomic,retain) IGDirectContentUploadInfo * uploadInfo; 
@required
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(id)arg1;

@end

