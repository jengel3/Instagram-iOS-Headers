
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UILabel;

@interface IGLocationSuggestionTitleControl : UIControl {

	UIImageView* _imageView;
	UILabel* _textLabel;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                  //@synthesize textLabel=_textLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

