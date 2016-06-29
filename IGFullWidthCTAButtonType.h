
@class NSString;


@protocol IGFullWidthCTAButtonType <NSObject>
@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (assign,nonatomic) int buttonState; 
@required
-(void)setButtonState:(int)arg1;
-(int)buttonState;
-(void)setSecondaryText:(id)arg1;
-(void)setPrimaryText:(id)arg1;
-(NSString *)primaryText;
-(NSString *)secondaryText;

@end

