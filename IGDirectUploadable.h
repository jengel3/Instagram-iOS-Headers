
@class IGDirectContentUploadInfo;


@protocol IGDirectUploadable <NSObject>
@property (nonatomic,copy) IGDirectContentUploadInfo * uploadInfo; 
@required
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(id)arg1;

@end

