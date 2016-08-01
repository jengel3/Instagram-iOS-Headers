
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class NSString, UIImage;

@interface IGAlbumCameraPermissionButton : UIButton {

	NSString* _enabledText;
	NSString* _disabledText;
	UIImage* _checkmarkImage;

}

@property (nonatomic,copy,readonly) NSString * enabledText;               //@synthesize enabledText=_enabledText - In the implementation block
@property (nonatomic,copy,readonly) NSString * disabledText;              //@synthesize disabledText=_disabledText - In the implementation block
@property (nonatomic,readonly) UIImage * checkmarkImage;                  //@synthesize checkmarkImage=_checkmarkImage - In the implementation block
+(id)enabledColor;
+(id)highlightedColor;
+(id)disabledColor;
-(void)updateTextAndIconAnimated:(char)arg1 ;
-(NSString *)enabledText;
-(NSString *)disabledText;
-(id)initWithEnabledText:(id)arg1 disabledText:(id)arg2 ;
-(UIImage *)checkmarkImage;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(char)arg1 ;
@end

