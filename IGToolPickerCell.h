
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGPickerCellType.h>

@class UIImageView, NSString, UIColor, UIView, UILabel;

@interface IGToolPickerCell : UICollectionViewCell <IGPickerCellType> {

	char _layoutCenterAligned;
	UIView* _iconContainer;
	UIImageView* _iconView;
	UIColor* _pressedBackgroundColor;
	UIColor* _normalBackgroundColor;
	UIColor* _iconBackgroundColor;
	UIView* _highlightLine;
	UIView* _iconBackgroundView;
	UIImageView* _iconContainerBorderView;
	UILabel* _label;

}

@property (nonatomic,retain) UIView * highlightLine;                             //@synthesize highlightLine=_highlightLine - In the implementation block
@property (nonatomic,retain) UIView * iconBackgroundView;                        //@synthesize iconBackgroundView=_iconBackgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * iconContainerBorderView;              //@synthesize iconContainerBorderView=_iconContainerBorderView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIView * iconContainer;                           //@synthesize iconContainer=_iconContainer - In the implementation block
@property (nonatomic,readonly) UIImageView * iconView;                           //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) char showsHighlightIndicator; 
@property (nonatomic,retain) UIColor * highlightIndicatorColor; 
@property (nonatomic,retain) UIColor * pressedBackgroundColor;                   //@synthesize pressedBackgroundColor=_pressedBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * normalBackgroundColor;                    //@synthesize normalBackgroundColor=_normalBackgroundColor - In the implementation block
@property (assign,nonatomic) char layoutCenterAligned;                           //@synthesize layoutCenterAligned=_layoutCenterAligned - In the implementation block
@property (nonatomic,retain) UIColor * iconBackgroundColor;                      //@synthesize iconBackgroundColor=_iconBackgroundColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)iconSizeForCellSize:(CGSize)arg1 ;
+(float)iconPaddingForCellSize:(CGSize)arg1 ;
+(CGSize)cellSizeToFit:(CGSize)arg1 ;
-(UIView *)iconContainer;
-(void)setLayoutCenterAligned:(char)arg1 ;
-(void)setShowsHighlightIndicator:(char)arg1 ;
-(void)setPressedBackgroundColor:(UIColor *)arg1 ;
-(void)setIconBackgroundColor:(UIColor *)arg1 ;
-(void)setNormalBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)pressedBackgroundColor;
-(char)layoutCenterAligned;
-(UIColor *)iconBackgroundColor;
-(UIView *)highlightLine;
-(void)setHighlightLine:(UIView *)arg1 ;
-(UIView *)iconBackgroundView;
-(void)setIconBackgroundView:(UIView *)arg1 ;
-(UIImageView *)iconContainerBorderView;
-(void)setIconContainerBorderView:(UIImageView *)arg1 ;
-(char)showsHighlightIndicator;
-(id)LX_snapshotView;
-(UIColor *)normalBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(UILabel *)label;
-(UIImageView *)iconView;
-(UIColor *)highlightIndicatorColor;
-(void)setHighlightIndicatorColor:(UIColor *)arg1 ;
@end

