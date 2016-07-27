
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGPickerCellType.h>
#import <Instagram/IGPickerNuxCellType.h>

@class UIImageView, UIColor, UILabel, NSString;

@interface IGWhiteFilterPickerCell : UICollectionViewCell <IGPickerCellType, IGPickerNuxCellType> {

	char _showsHighlightIndicator;
	char _displayNewFilterNUX;
	UIImageView* _iconView;
	UIColor* _highlightIndicatorColor;
	UILabel* _titleLabel;
	UILabel* _nuxLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * nuxLabel;                           //@synthesize nuxLabel=_nuxLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIImageView * iconView;                       //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) char showsHighlightIndicator;                   //@synthesize showsHighlightIndicator=_showsHighlightIndicator - In the implementation block
@property (nonatomic,retain) UIColor * highlightIndicatorColor;              //@synthesize highlightIndicatorColor=_highlightIndicatorColor - In the implementation block
@property (assign,nonatomic) char displayNewFilterNUX;                       //@synthesize displayNewFilterNUX=_displayNewFilterNUX - In the implementation block
+(CGSize)cellSizeToFit:(CGSize)arg1 ;
-(void)setShowsHighlightIndicator:(char)arg1 ;
-(void)updateTitleStyle;
-(UILabel *)nuxLabel;
-(void)setDisplayNewFilterNUX:(char)arg1 animated:(char)arg2 ;
-(char)showsHighlightIndicator;
-(char)displayNewFilterNUX;
-(void)setDisplayNewFilterNUX:(char)arg1 ;
-(id)LX_snapshotView;
-(void)configureForManageFiltersCell;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)image;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)iconView;
-(UIColor *)highlightIndicatorColor;
-(void)setHighlightIndicatorColor:(UIColor *)arg1 ;
@end

