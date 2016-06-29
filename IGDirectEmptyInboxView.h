
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface IGDirectEmptyInboxView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _nuxImageView;

}

@property (nonatomic,readonly) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * nuxImageView;              //@synthesize nuxImageView=_nuxImageView - In the implementation block
-(void)setupNUXImageView;
-(void)setupTitleLabel;
-(void)setupSubtitleLabel;
-(void)configureLabel:(id)arg1 ;
-(UIImageView *)nuxImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setupSubviews;
@end

