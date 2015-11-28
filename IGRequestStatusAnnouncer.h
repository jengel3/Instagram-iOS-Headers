
#import <Instagram/IGAnnouncer.h>

@interface IGRequestStatusAnnouncer : IGAnnouncer
-(void)requestWillBegin:(id)arg1 ;
-(void)requestDidEnd:(id)arg1 ;
-(void)responseWillBeginForRequest:(id)arg1 ;
-(void)responseDidEndForRequest:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

