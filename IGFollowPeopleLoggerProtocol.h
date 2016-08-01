
@class NSString, NSMutableSet;


@protocol IGFollowPeopleLoggerProtocol <NSObject>
@property (nonatomic,copy) NSString * module; 
@property (nonatomic,copy) NSString * view; 
@property (nonatomic,readonly) NSMutableSet * set; 
@required
-(NSString *)module;
-(void)logImpressionWithUserInfo:(id)arg1 position:(unsigned)arg2;
-(void)logClickWithUserInfo:(id)arg1 position:(unsigned)arg2;
-(void)logDismissWithUserInfo:(id)arg1 position:(unsigned)arg2;
-(void)logFollowWithUserInfo:(id)arg1 position:(unsigned)arg2;
-(void)setModule:(id)arg1;
-(NSString *)view;
-(NSMutableSet *)set;
-(void)setView:(id)arg1;

@end

