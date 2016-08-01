
#import <Instagram/IGFollowPeopleLoggerProtocol.h>

@class NSString, NSMutableSet;

@interface IGProfileChainingLogger : NSObject <IGFollowPeopleLoggerProtocol> {

	NSString* _module;
	NSString* _view;
	NSMutableSet* _set;
	NSString* _currentUserPk;
	unsigned _similarAccountSource;

}

@property (nonatomic,copy,readonly) NSString * currentUserPk;              //@synthesize currentUserPk=_currentUserPk - In the implementation block
@property (assign,nonatomic) unsigned similarAccountSource;                //@synthesize similarAccountSource=_similarAccountSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * module;                              //@synthesize module=_module - In the implementation block
@property (nonatomic,copy) NSString * view;                                //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSMutableSet * set;                         //@synthesize set=_set - In the implementation block
-(NSString *)module;
-(NSString *)currentUserPk;
-(unsigned)similarAccountSource;
-(void)logSimilarAccountsEvent:(id)arg1 chainedUserPK:(id)arg2 targetUserPK:(id)arg3 source:(unsigned)arg4 position:(unsigned)arg5 ;
-(void)setSimilarAccountSource:(unsigned)arg1 ;
-(void)logImpressionWithUserInfo:(id)arg1 position:(unsigned)arg2 ;
-(void)logClickWithUserInfo:(id)arg1 position:(unsigned)arg2 ;
-(void)logDismissWithUserInfo:(id)arg1 position:(unsigned)arg2 ;
-(void)logFollowWithUserInfo:(id)arg1 position:(unsigned)arg2 ;
-(void)setModule:(NSString *)arg1 ;
-(id)initWithModule:(id)arg1 view:(id)arg2 source:(unsigned)arg3 ;
-(NSString *)view;
-(NSMutableSet *)set;
-(void)setView:(NSString *)arg1 ;
@end

