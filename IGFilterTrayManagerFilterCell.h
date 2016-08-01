
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIImageView, UIButton, UIView, NSString, UIImage;

@interface IGFilterTrayManagerFilterCell : UICollectionViewCell {

	Class _filterClass;
	UILabel* _textLabel;
	UIImageView* _visibleIndicator;
	UIButton* _rearrangeControl;
	UIImageView* _filterIconView;
	UIImageView* _filterFrameView;
	UIView* _topLine;
	UIView* _bottomLine;
	NSString* _imageName;

}

@property (nonatomic,retain) UILabel * textLabel;                         //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * visibleIndicator;              //@synthesize visibleIndicator=_visibleIndicator - In the implementation block
@property (nonatomic,retain) UIButton * rearrangeControl;                 //@synthesize rearrangeControl=_rearrangeControl - In the implementation block
@property (nonatomic,retain) UIImageView * filterIconView;                //@synthesize filterIconView=_filterIconView - In the implementation block
@property (nonatomic,retain) UIImageView * filterFrameView;               //@synthesize filterFrameView=_filterFrameView - In the implementation block
@property (nonatomic,retain) UIView * topLine;                            //@synthesize topLine=_topLine - In the implementation block
@property (nonatomic,retain) UIView * bottomLine;                         //@synthesize bottomLine=_bottomLine - In the implementation block
@property (nonatomic,copy) NSString * imageName;                          //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) UIImage * filterIcon; 
@property (assign,nonatomic) Class filterClass;                           //@synthesize filterClass=_filterClass - In the implementation block
-(Class)filterClass;
-(void)setFilterClass:(Class)arg1 ;
-(id)LX_snapshotView;
-(UIImageView *)visibleIndicator;
-(UIButton *)rearrangeControl;
-(UIImageView *)filterIconView;
-(UIImageView *)filterFrameView;
-(UIImage *)filterIcon;
-(CGRect)LX_rearrangeHotspot;
-(void)setVisibleIndicator:(UIImageView *)arg1 ;
-(void)setRearrangeControl:(UIButton *)arg1 ;
-(void)setFilterIconView:(UIImageView *)arg1 ;
-(void)setFilterFrameView:(UIImageView *)arg1 ;
-(void)setFilterIcon:(UIImage *)arg1 ;
-(UIView *)topLine;
-(void)setTopLine:(UIView *)arg1 ;
-(UIView *)bottomLine;
-(void)setBottomLine:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelected:(char)arg1 ;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
@end

