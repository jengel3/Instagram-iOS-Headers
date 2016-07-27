
@class IGDirectContentUploadInfo;


@protocol IGDirectUploadable <NSObject>
@property (nonatomic,copy) IGDirectContentUploadInfo * uploadInfo; 
@property (nonatomic,readonly) char canConvertToFullMessageByAddingItemID; 
@required
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(id)arg1;
-(char)canConvertToFullMessageByAddingItemID;

@end

