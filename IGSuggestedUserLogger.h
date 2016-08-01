
#import <Instagram/IGFollowPeopleLoggerProtocol.h>

@class NSString, NSMutableSet;

@interface IGSuggestedUserLogger : NSObject <IGFollowPeopleLoggerProtocol> {

	NSString* _module;
	NSString* _view;
	NSMutableSet* _set;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * module;                       //@synthesize module=_module - In the implementation block
@property (nonatomic,copy) NSString * view;                         //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSMutableSet * set;                  //@synthesize set=_set - In the implementation block
-(NSString *)module;
-(void)logImpressionWithUserInfo:(id)arg1 position:(unsigned)arg2 ;
-(void)logClickWithUserInfo:(id)arg1 position:(unsigned)arg2 ;
-(void)logDismissWithUserInfo:(id)arg1 position:(unsigned)arg2 ;
-(void)logFollowWithUserInfo:(id)arg1 position:(unsigned)arg2 ;
-(void)setModule:(NSString *)arg1 ;
-(id)initWithModule:(id)arg1 view:(id)arg2 ;
-(NSString *)view;
-(NSMutableSet *)set;
-(void)setView:(NSString *)arg1 ;
@end

