

@protocol IGImageProgressViewDelegate <NSObject>
@required
-(void)progressImageView:(id)arg1 didLoadImage:(id)arg2 withDataLength:(unsigned)arg3;
-(void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2;

@end

