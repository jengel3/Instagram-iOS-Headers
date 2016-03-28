
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, UIImageView, UILabel, UIColor;

@interface IGToolPickerCell : UICollectionViewCell {

	char _layoutCenterAligned;
	UIView* _iconContainer;
	UIImageView* _iconView;
	UILabel* _label;
	UIColor* _pressedBackgroundColor;
	UIColor* _normalBackgroundColor;
	UIColor* _iconBackgroundColor;
	UIView* _highlightLine;
	UIView* _iconBackgroundView;
	UIImageView* _iconContainerBorderView;

}

@property (nonatomic,retain) UIView * iconContainer;                             //@synthesize iconContainer=_iconContainer - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                             //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                    //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) char showsHighlightBar; 
@property (nonatomic,retain) UIColor * highlightBarColor; 
@property (nonatomic,retain) UIColor * pressedBackgroundColor;                   //@synthesize pressedBackgroundColor=_pressedBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * normalBackgroundColor;                    //@synthesize normalBackgroundColor=_normalBackgroundColor - In the implementation block
@property (assign,nonatomic) char layoutCenterAligned;                           //@synthesize layoutCenterAligned=_layoutCenterAligned - In the implementation block
@property (nonatomic,retain) UIColor * iconBackgroundColor;                      //@synthesize iconBackgroundColor=_iconBackgroundColor - In the implementation block
@property (nonatomic,retain) UIView * highlightLine;                             //@synthesize highlightLine=_highlightLine - In the implementation block
@property (nonatomic,retain) UIView * iconBackgroundView;                        //@synthesize iconBackgroundView=_iconBackgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * iconContainerBorderView;              //@synthesize iconContainerBorderView=_iconContainerBorderView - In the implementation block
+(float)iconPaddingForCellSize:(CGSize)arg1 ;
+(CGSize)cellSizeToFit:(CGSize)arg1 ;
+(float)iconSizeForCellSize:(CGSize)arg1 ;
-(id)LX_snapshotView;
-(void)setShowsHighlightBar:(char)arg1 ;
-(void)setHighlightBarColor:(UIColor *)arg1 ;
-(void)setIconBackgroundColor:(UIColor *)arg1 ;
-(void)setNormalBackgroundColor:(UIColor *)arg1 ;
-(char)showsHighlightBar;
-(UIView *)iconContainer;
-(void)setLayoutCenterAligned:(char)arg1 ;
-(void)setPressedBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)highlightBarColor;
-(void)setIconContainer:(UIView *)arg1 ;
-(UIColor *)pressedBackgroundColor;
-(char)layoutCenterAligned;
-(UIColor *)iconBackgroundColor;
-(UIView *)highlightLine;
-(void)setHighlightLine:(UIView *)arg1 ;
-(UIView *)iconBackgroundView;
-(void)setIconBackgroundView:(UIView *)arg1 ;
-(UIImageView *)iconContainerBorderView;
-(void)setIconContainerBorderView:(UIImageView *)arg1 ;
-(UIColor *)normalBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
@end

