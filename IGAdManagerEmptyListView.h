
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IGAdManagerEmptyListView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(id)createImageView;
-(id)createSubtitleLabel;
-(void)setUpViewHierarchy;
-(id)createTitleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(UIImageView *)imageView;
@end

