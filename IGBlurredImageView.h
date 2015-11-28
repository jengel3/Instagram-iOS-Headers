
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGImageViewDelegate.h>

@class IGImageView, NSString;

@interface IGBlurredImageView : UIView <IGImageViewDelegate> {

	IGImageView* _imageView;

}

@property (nonatomic,__weak,readonly) IGImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupSubviewsWithFrame:(CGRect)arg1 ;
-(void)cancelImageLoad;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(IGImageView *)imageView;
-(void)setPhoto:(id)arg1 ;
@end

