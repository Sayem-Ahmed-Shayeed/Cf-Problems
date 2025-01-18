 for(int j=0; j<unq.size(); j++)
            {
                if((unq[i]==unq[j]+32) || (unq[i]==unq[j]-32))
                {
                    if(cnt[i]==cnt[j])
                        ans+=cnt[i];
                    else if(cnt[i]!=cnt[j])
                    {
                        int mnm=min(cnt[i],cnt[j]);
                        ans+=mnm;
                        if(temp<=k)
                        {
                            if(cnt[i]>cnt[j])
                            {
                                int rem=cnt[i]-cnt[j];
                                if(rem>=2)
                                {
                                    ans+=rem/2;
                                    temp+=(rem/2);
                                }
                            }
                            if(cnt[i]<cnt[j])
                            {
                                int rem=cnt[j]-cnt[i];
                                if(rem>=2)
                                {
                                    ans+=rem/2;
                                    temp+=(rem/2);
                                }
                            }
                        }
                    }
                }
                else if(j==unq.size())
                {
                    int div=cnt[i]/2;
                    if(div<=k)
                    {
                        if(temp<=k)
                        {
                            ans+=div;
                            temp+=div;
                        }
                    }
                    else if(div>k)
                    {
                        if(temp<k)
                        {
                        ans+=k;
                        temp+=k;
                        }
                    }
                }
            }
