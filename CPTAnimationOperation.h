

@protocol CPTAnimationDelegate, NSCopyingNSObject;
@class CPTAnimationPeriod, NSDictionary;

@interface CPTAnimationOperation : NSObject {

	char canceled;
	CPTAnimationPeriod* period;
	int animationCurve;
	id boundObject;
	SEL boundGetter;
	SEL boundSetter;
	id<CPTAnimationDelegate> delegate;
	id<NSCopying><NSObject> identifier;
	NSDictionary* userInfo;

}

@property (nonatomic,retain) CPTAnimationPeriod * period; 
@property (assign,nonatomic) int animationCurve; 
@property (nonatomic,retain) id boundObject; 
@property (assign,nonatomic) SEL boundGetter; 
@property (assign,nonatomic) SEL boundSetter; 
@property (assign,nonatomic,__weak) id<CPTAnimationDelegate> delegate; 
@property (getter=isCanceled) char canceled; 
@property (nonatomic,copy) id<NSCopying><NSObject> identifier; 
@property (nonatomic,copy) NSDictionary * userInfo; 
-(void)setBoundObject:(id)arg1 ;
-(void)setBoundGetter:(SEL)arg1 ;
-(void)setBoundSetter:(SEL)arg1 ;
-(id)boundObject;
-(SEL)boundGetter;
-(int)animationCurve;
-(SEL)boundSetter;
-(void)setDelegate:(id<CPTAnimationDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<CPTAnimationDelegate>)delegate;
-(id<NSCopying><NSObject>)identifier;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setAnimationCurve:(int)arg1 ;
-(void)setIdentifier:(id<NSCopying><NSObject>)arg1 ;
-(void)setCanceled:(char)arg1 ;
-(char)isCanceled;
-(void)setPeriod:(CPTAnimationPeriod *)arg1 ;
-(CPTAnimationPeriod *)period;
@end

