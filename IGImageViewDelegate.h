

@protocol IGImageViewDelegate <NSObject>
@optional
-(void)imageViewLoadedImage:(id)arg1;
-(void)imageViewFailedToLoadImage:(id)arg1 error:(id)arg2;
-(void)imageViewDidChangeImageProgress:(float)arg1;

@end

