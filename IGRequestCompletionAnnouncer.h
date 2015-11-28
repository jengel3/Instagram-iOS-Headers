
#import <Instagram/IGAnnouncer.h>

@interface IGRequestCompletionAnnouncer : IGAnnouncer
-(void)request:(id)arg1 didLoadWithData:(id)arg2 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

