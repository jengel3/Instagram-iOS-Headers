
#import <UIKit/UIView.h>

@interface IGRealtimeDebugIndicator : UIView {

	unsigned _clientStatus;
	unsigned _subscriptionStatus;

}

@property (assign,nonatomic) unsigned clientStatus;                    //@synthesize clientStatus=_clientStatus - In the implementation block
@property (assign,nonatomic) unsigned subscriptionStatus;              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
+(id)sharedDebugIndicator;
-(void)setClientStatus:(unsigned)arg1 ;
-(void)setSubscriptionStatus:(unsigned)arg1 ;
-(void)updateColor;
-(void)updateClientStatus:(id)arg1 ;
-(void)updateSubscriptionStatus:(id)arg1 ;
-(unsigned)clientStatus;
-(unsigned)subscriptionStatus;
-(void)dealloc;
-(id)init;
@end

