
#import <Instagram/BFAppLinkResolving.h>

@class NSMutableDictionary, NSString;

@interface FBAppLinkResolver : NSObject <BFAppLinkResolving> {

	NSMutableDictionary* _cachedLinks;
	int _userInterfaceIdiom;

}

@property (nonatomic,retain) NSMutableDictionary * cachedLinks;              //@synthesize cachedLinks=_cachedLinks - In the implementation block
@property (assign,nonatomic) int userInterfaceIdiom;                         //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resolver;
-(id)appLinkFromURLInBackground:(id)arg1 ;
-(void)setCachedLinks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedLinks;
-(id)appLinksFromURLsInBackground:(id)arg1 ;
-(id)initWithUserInterfaceIdiom:(int)arg1 ;
-(int)userInterfaceIdiom;
-(void)dealloc;
-(void)setUserInterfaceIdiom:(int)arg1 ;
@end

