
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGAnnouncer.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSString;

@interface IGFeedScrollViewAnnouncer : IGAnnouncer <UIScrollViewDelegate> {

	float _loadDistance;

}

@property (nonatomic,readonly) float loadDistance;                  //@synthesize loadDistance=_loadDistance - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)loadDistance;
-(id)initWithLoadDistance:(float)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

