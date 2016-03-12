
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, IGLabel;

@interface IGEmptyLibraryView : UIView {

	UIView* _contentView;
	IGLabel* _titleLabel;
	IGLabel* _explanationLabel;

}

@property (nonatomic,retain) UIView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) IGLabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IGLabel * explanationLabel;              //@synthesize explanationLabel=_explanationLabel - In the implementation block
-(void)setExplanationLabel:(IGLabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(IGLabel *)titleLabel;
-(void)setTitleLabel:(IGLabel *)arg1 ;
-(IGLabel *)explanationLabel;
@end

