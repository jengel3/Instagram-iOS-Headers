
#import <Instagram/IGTableViewCell.h>

@class UIColor;

@interface IGPlainTableViewCell : IGTableViewCell {

	char _canSelect;
	UIColor* _defaultBackgroundColor;
	UIColor* _highlightedBackgroundColor;

}

@property (nonatomic,retain) UIColor * defaultBackgroundColor;                  //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
@property (nonatomic,readonly) char canSelect;                                  //@synthesize canSelect=_canSelect - In the implementation block
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)highlightedBackgroundColor;
-(char)canSelect;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)setSelectionStyle:(int)arg1 ;
-(UIColor *)defaultBackgroundColor;
@end

