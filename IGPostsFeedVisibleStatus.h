

@class NSString;

@interface IGPostsFeedVisibleStatus : NSObject {

	NSString* _visibleItemPK;

}

@property (nonatomic,readonly) NSString * visibleItemPK;              //@synthesize visibleItemPK=_visibleItemPK - In the implementation block
-(NSString *)visibleItemPK;
-(void)setVisibleItemPK:(NSString *)arg1 ;
@end

