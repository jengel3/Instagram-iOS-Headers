

@class UIApplication;

@interface IGShortcutHandler : NSObject {

	UIApplication* _application;

}

@property (nonatomic,retain) UIApplication * application;              //@synthesize application=_application - In the implementation block
-(void)handleShortcutAction:(id)arg1 ;
-(void)setApplication:(UIApplication *)arg1 ;
-(void)dealloc;
-(void)update;
-(id)initWithApplication:(id)arg1 ;
-(UIApplication *)application;
@end

