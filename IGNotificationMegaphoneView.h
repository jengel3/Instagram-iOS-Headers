
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGenericMegaphoneView.h>

@protocol IGNotificationMegaphoneViewDelegate;
@class NSString;

@interface IGNotificationMegaphoneView : IGGenericMegaphoneView {

	char _megaphoneSeen;
	id<IGNotificationMegaphoneViewDelegate> _notificationDelegate;
	NSString* _source;

}

@property (assign,nonatomic,__weak) id<IGNotificationMegaphoneViewDelegate> notificationDelegate;              //@synthesize notificationDelegate=_notificationDelegate - In the implementation block
@property (nonatomic,copy) NSString * source;                                                                  //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) char megaphoneSeen;                                                               //@synthesize megaphoneSeen=_megaphoneSeen - In the implementation block
-(void)logMegaphoneSeen;
-(char)megaphoneSeen;
-(void)setMegaphoneSeen:(char)arg1 ;
-(id)newSideImage;
-(void)didDismiss;
-(void)didSelectButtonOne;
-(id)initWithFrame:(CGRect)arg1 andHeader:(id)arg2 andMessage:(id)arg3 fromSource:(id)arg4 ;
-(void)setNotificationDelegate:(id<IGNotificationMegaphoneViewDelegate>)arg1 ;
-(id<IGNotificationMegaphoneViewDelegate>)notificationDelegate;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(id)cacheKey;
-(void)logEvent:(id)arg1 ;
@end

