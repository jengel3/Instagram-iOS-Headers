
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGPickerCellType.h>

@class UIImageView, UIColor, UILabel, UIView, NSString;

@interface IGWhiteToolPickerCell : UICollectionViewCell <IGPickerCellType> {

	char _showsHighlightIndicator;
	UIImageView* _iconView;
	UIColor* _highlightIndicatorColor;
	UILabel* _titleLabel;
	UIView* _circleView;
	UIView* _highlightIndicator;

}

@property (nonatomic,readonly) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIView * circleView;                          //@synthesize circleView=_circleView - In the implementation block
@property (nonatomic,readonly) UIView * highlightIndicator;                  //@synthesize highlightIndicator=_highlightIndicator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIImageView * iconView;                       //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) char showsHighlightIndicator;                   //@synthesize showsHighlightIndicator=_showsHighlightIndicator - In the implementation block
@property (nonatomic,retain) UIColor * highlightIndicatorColor;              //@synthesize highlightIndicatorColor=_highlightIndicatorColor - In the implementation block
+(CGSize)cellSizeToFit:(CGSize)arg1 ;
-(void)setShowsHighlightIndicator:(char)arg1 ;
-(char)showsHighlightIndicator;
-(UIView *)circleView;
-(UIView *)highlightIndicator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)iconView;
-(UIColor *)highlightIndicatorColor;
-(void)setHighlightIndicatorColor:(UIColor *)arg1 ;
@end

