
#import <Instagram/IGTableViewCell.h>

@class UIColor;

@interface IGGroupedTableViewCell : IGTableViewCell {

	char _enabled;
	char _actionable;
	UIColor* _defaultBackgroundColor;
	int _sidePadding;

}

@property (assign,nonatomic) char enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char actionable;                               //@synthesize actionable=_actionable - In the implementation block
@property (assign,nonatomic) int sidePadding;                               //@synthesize sidePadding=_sidePadding - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;              //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(void)setSidePadding:(int)arg1 ;
-(void)configureTextLabels;
-(void)applySelectedStyle:(char)arg1 ;
-(int)sidePadding;
-(char)enabled;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(void)setActionable:(char)arg1 ;
-(char)actionable;
-(UIColor *)defaultBackgroundColor;
@end

