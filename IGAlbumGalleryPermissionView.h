
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface IGAlbumGalleryPermissionView : UIView {

	UIButton* _actionButton;
	UILabel* _label;

}

@property (nonatomic,readonly) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
-(UIButton *)actionButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
@end

