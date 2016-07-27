

#import <Instagram/Instagram-Structs.h>
@class UIColor, UIFont;

@interface IGLabelItemConfiguration : NSObject {

	char _hideTopSeparator;
	char _hideBottomSeparator;
	UIColor* _cellBackgroundColor;
	UIColor* _textLabelColor;
	UIFont* _textLabelFont;
	UIColor* _separaterColor;
	UIEdgeInsets _labelViewInsets;

}

@property (nonatomic,readonly) UIColor * cellBackgroundColor;              //@synthesize cellBackgroundColor=_cellBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * textLabelColor;                   //@synthesize textLabelColor=_textLabelColor - In the implementation block
@property (nonatomic,readonly) UIFont * textLabelFont;                     //@synthesize textLabelFont=_textLabelFont - In the implementation block
@property (nonatomic,readonly) UIColor * separaterColor;                   //@synthesize separaterColor=_separaterColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets labelViewInsets;               //@synthesize labelViewInsets=_labelViewInsets - In the implementation block
@property (nonatomic,readonly) char hideTopSeparator;                      //@synthesize hideTopSeparator=_hideTopSeparator - In the implementation block
@property (nonatomic,readonly) char hideBottomSeparator;                   //@synthesize hideBottomSeparator=_hideBottomSeparator - In the implementation block
+(id)commentHeaderConfig;
+(id)activityItemHeaderConfig;
-(id)initWithCellBackgroundColor:(id)arg1 textLabelColor:(id)arg2 textLabelFont:(id)arg3 separatorColor:(id)arg4 labelViewInsets:(UIEdgeInsets)arg5 hideTopSeparator:(char)arg6 hideBottomSeparator:(char)arg7 ;
-(char)hideTopSeparator;
-(UIFont *)textLabelFont;
-(UIColor *)separaterColor;
-(UIEdgeInsets)labelViewInsets;
-(char)hideBottomSeparator;
-(UIColor *)cellBackgroundColor;
-(UIColor *)textLabelColor;
@end

