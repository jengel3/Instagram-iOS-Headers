
@class UIImage;


@protocol RCTImageComponent <NSObject>
@property (nonatomic,readonly) UIImage * image; 
@required
-(UIImage *)image;

@end

