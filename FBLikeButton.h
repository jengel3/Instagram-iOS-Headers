
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage, UIImageView;

@interface FBLikeButton : UIButton {

	UIImage* _iconImageNormal;
	UIImage* _iconImageSelected;
	UIImageView* _iconImageView;

}
-(void)_initializeContent;
-(void)_updateIconForState;
-(CGSize)_sizeWithTitleSize:(CGSize)arg1 ;
-(UIEdgeInsets)_contentEdgeInsetsForHeight:(float)arg1 ;
-(UIEdgeInsets)_contentEdgeInsetsForContentHeight:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(char)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
@end

