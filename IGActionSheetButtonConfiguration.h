

@class NSString, UIImage;

@interface IGActionSheetButtonConfiguration : NSObject {

	NSString* _title;
	NSString* _accessibilityIdentifier;
	UIImage* _image;
	int _style;

}

@property (nonatomic,copy,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityIdentifier;              //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) int style;                                            //@synthesize style=_style - In the implementation block
+(id)buttonWithTitle:(id)arg1 accessibilityIdentifier:(id)arg2 image:(id)arg3 style:(int)arg4 ;
-(id)initWithButtonTitle:(id)arg1 accessibilityIdentifier:(id)arg2 image:(id)arg3 style:(int)arg4 ;
-(id)description;
-(NSString *)title;
-(UIImage *)image;
-(int)style;
-(NSString *)accessibilityIdentifier;
@end

