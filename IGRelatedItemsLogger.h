

@class NSString, NSMutableSet;

@interface IGRelatedItemsLogger : NSObject {

	NSString* _module;
	NSMutableSet* _loggedImpressions;

}

@property (nonatomic,copy,readonly) NSString * module;                        //@synthesize module=_module - In the implementation block
@property (nonatomic,readonly) NSMutableSet * loggedImpressions;              //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
-(NSString *)module;
-(id)initWithModule:(id)arg1 ;
-(NSMutableSet *)loggedImpressions;
-(void)logImpressionForLocation:(id)arg1 ;
-(void)logImpressionForHashtag:(id)arg1 ;
-(void)logTapForLocation:(id)arg1 ;
-(void)logTapForHashtag:(id)arg1 ;
-(void)configureEvent:(id)arg1 hashtag:(id)arg2 ;
-(void)configureEvent:(id)arg1 location:(id)arg2 ;
-(void)logImpressionForItem:(id)arg1 ;
-(void)logTapForItem:(id)arg1 atIndexPath:(id)arg2 ;
@end

