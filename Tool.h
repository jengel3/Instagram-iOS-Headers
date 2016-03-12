

@class NSString, UIImage;

@interface Tool : NSObject {

	NSString* _title;
	UIImage* _icon;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * icon;                //@synthesize icon=_icon - In the implementation block
-(id)initWithTitle:(id)arg1 icon:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
@end

