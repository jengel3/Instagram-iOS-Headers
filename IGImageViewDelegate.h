

@protocol IGImageViewDelegate <NSObject>
@optional
-(void)imageViewFailedToLoadImage:(id)arg1 error:(id)arg2;
-(void)imageViewLoadedImage:(id)arg1;
-(void)imageViewDidChangeImageProgress:(float)arg1;

@end

