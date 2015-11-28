
#import <Instagram/IGAnnouncer.h>

@interface IGRequestProgressAnnouncer : IGAnnouncer
-(void)request:(id)arg1 didReceiveDownloadBytesRead:(unsigned)arg2 totalBytesRead:(long long)arg3 totalBytesExpectedToRead:(long long)arg4 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

